# vmpooler-deployment

- [vmpooler-deployment](#vmpooler-deployment)
  - [VMPooler Components](#vmpooler-components)
  - [Docker Registry](#docker-registry)
  - [Helm Repository](#helm-repository)
    - [Adding / updating charts](#adding--updating-charts)
  - [Development](#development)
    - [Docker Compose URLs](#docker-compose-urls)
    - [Deploy Chart for Testing](#deploy-chart-for-testing)
  - [Releasing](#releasing)
  - [Contributing](#contributing)
  - [License](#license)

This repo contains Dockerfiles and a Helm chart that can be used to deploy [VMPooler](https://github.com/puppetlabs/vmpooler). The Release Engineering team at Puppet uses the code here as part of operating our VMPooler instances.

## VMPooler Components

The docker image gnerated and hosted by this project contain the following VMPooler components:

- [VMPooler Core](https://github.com/puppetlabs/vmpooler)
- [VMPooler EC2 Provider](https://github.com/puppetlabs/vmpooler-provider-ec2)
- [VMPooler GCE Provider](https://github.com/puppetlabs/vmpooler-provider-gce)
- [VMPooler vSphere Provider](https://github.com/puppetlabs/vmpooler-provider-vsphere)

## Docker Registry

The GitHub Actions in this repository publish images to GitHub Packages. You can browse the VMPooler containers [here](https://github.com/puppetlabs/vmpooler-deployment/pkgs/container/vmpooler-deployment%2Fvmpooler).

The vmpooler officially released docker image tags use a semantic version, where the version increments correlate to the increments in any of the gems at `docker/Gemfile`.

Image tags starting with `pr<PULL REQUEST NUMBER>-<GIT SHA>` are generated when opening and pushing to a pull request and will periodically be cleaned up.

## Helm Repository

The `docs/` folder in this repository represents a Helm repository served via GitHub Pages at https://puppetlabs.github.io/vmpooler-deployment/

```bash
$ helm repo add vmpooler-deployment https://puppetlabs.github.io/vmpooler-deployment/
"vmpooler-deployment" has been added to your repositories
```

### Adding / updating charts

Make the desired changes to the helm chart in helm-charts/vmpooler and run `./update-chart`.

## Development

Prerequisites:

- [Docker](https://docs.docker.com/engine/install/)
- [Docker Compose](https://docs.docker.com/compose/install/)

1. Become familiar with the configuration file `docker/vmpooler.yaml` as described in [VMPooler](https://github.com/puppetlabs/vmpooler) Core.
   - The default configuration file only enables the dummy provider built into [VMPooler](https://github.com/puppetlabs/vmpooler) Core. See each project below for documentation on how to use provider specific options:
      - [vmpooler-provider-ec2](https://github.com/puppetlabs/vmpooler-provider-ec2)
      - [vmpooler-provider-gce](https://github.com/puppetlabs/vmpooler-provider-gce)
      - [vmpooler-provider-vsphere](https://github.com/puppetlabs/vmpooler-provider-vsphere)
2. Chose a Development method:
   - Develop via local source:
      1. Clone all of the known vmpooler projects listed at [vmpooler-components](#vmpooler-components) under a common directory, for example:

           ```bash
           |-- vmpooler-projects
           |  |--vmpooler-deployment
           |  |--vmpooler-provider-ec2
           |  |--vmpooler-provider-gce
           |  |--vmpooler-provider-vsphere
           ```

      2. From the `vmpooler-projects` directory run `docker build -t vmpooler-local -f vmpooler-deployment/docker/Dockerfile.local .`
      3. Run `docker compose -f vmpooler-deployment/docker/docker-compose.local.yml up`

   - Develop via Git source:
      1. For the component(s) you are developing on, commit and push changes to a branch.
      2. Change to the `docker` directory and modify the `Gemfile` as needed to pull the gem(s) from your git branch.
      3. Run `./update-gemfile-lock` to update the `Gemfile.lock`
      4. Run `docker compose build && docker compose up`.

When a dependency Helm chart is updated, be sure to run `./update-chart-lock` to update the lockfile, otherwise the test and release workflows will fail.

### Docker Compose URLs

These are the default ports used in the docker compose file, to change them edit the `ports` key under the desired service in either `docker/docker-compose.yml` or `docker/docker-compose.local.yml`.

| App/Endpoint       | Path                                                        |
|--------------------|-------------------------------------------------------------|
| Redis Server       | `localhost:6379` (Password: `vmpooler`)                     |
| Redis Commander    | <http://localhost:8080> (Credentials: `admin:admin`)        |
| Jaeger             | <http://localhost:8081>
| VMPooler API       | <http://localhost:8082/api/v2>                              |
| VMPooler Dashboard | <http://localhost:8082/dashboard>                           |
| Metrics (API)      | <http://localhost:8082/prometheus>                          |
| Metrics (Manager)  | <http://localhost:8083/prometheus>                          |

### Deploy Chart for Testing

Helm charts are hosted with GitHub Pages since GitHub Packages does not support Helm, so you will need to build the chart locally and push the chart to your own helm repository. Follow these steps to generate a chart to host internally:

1. Update the "appVersion" key in `helm-charts/vmpooler/Chart.yaml` to the docker image tag that was generated by opening a pull request.
2. Update the "version" key to a pre-release tag, something like "x.y.z-rc.1", then run `./build-chart` to build the chart locally, and upload it to your desired location.

Artifactory Example:
`curl -H 'X-JFrog-Art-Api:<YOUR_API_KEY>' -T vmpooler-x.y.z-rc.1.tgz "https://artifactory.example.com/artifactory/helm__local/vmpooler-x.y.z-rc.1.tgz"`

## Releasing

Create a GitHub tag and release, publish a new docker image, and helm chart by opening a release prep pull request and running the release action:

1. Bump the "appVersion" key in `helm-charts/vmpooler/Chart.yaml` appropriately based on changes to `docker/Gemfile` and `docker/Gemfile.lock` in merged pull requests since the last release.
   - This key pertains to the docker tag that will be pushed upon release.
2. Bump the "version" key in `helm-charts/vmpooler/Chart.yaml` appropriately based on changes to the chart itself and increments of the "appVersion" in merged pull requests since the last release.
   - This key pertains to the helm chart verison that will be pushed upon release.
3. Run `./update-changelog` to update `CHANGELOG.md`.
4. Run `./build-chart` to package the new chart and update the repo index.
5. Commit and push changes to a new branch, then open a pull request against `main` and be sure to add the "maintenance" label.
6. After the pull request is approved and merged, then navigate to Actions --> Docker and Helm Release --> run workflow --> Branch: main --> Run workflow.
   - This action will push a tagged docker image to the GitHub container registry and helm chart to GitHub pages.

## Contributing

We welcome and encourage contributions!

## License

vmpooler-deployment is distributed under the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0.html). See the [LICENSE](LICENSE) file for more details.
