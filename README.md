# vmpooler-deployment

This repo contains Dockerfiles and a Helm chart that can be used to deploy [VMPooler](https://github.com/puppetlabs/vmpooler). The DIO team at Puppet uses the code here as part of operating our VMPooler instances.

## Docker Registry

The GitHub Actions in this repository publish images to GitHub Packages. You can browse the VMPooler containers [here](https://github.com/puppetlabs/vmpooler-deployment/pkgs/container/vmpooler-deployment%2Fvmpooler).

Containers are organized using image tags:

- `x.y.z-prod-all-providers` represents images built using the Dockerfile in `docker/prod-all-providers`. These images use the Gemfile in the same directory to pull in current versions of the `vmpooler` gem and the gems for all known production-grade providers.

## Helm Repository

The `docs/` folder in this repository represents a Helm repository served via GitHub Pages at https://puppetlabs.github.io/vmpooler-deployment/

```bash
$ helm repo add vmpooler-deployment https://puppetlabs.github.io/vmpooler-deployment/
"vmpooler-deployment" has been added to your repositories
```

### Adding / updating charts

```bash
cd docs/
helm package ../helm-charts/*
helm repo index --url https://puppetlabs.github.io/vmpooler-deployment/ .
git add .
cd ..
git commit -a
```

## Contributing

We welcome and encourage contributions!

## License

vmpooler-deployment is distributed under the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0.html). See the [LICENSE](LICENSE) file for more details.
