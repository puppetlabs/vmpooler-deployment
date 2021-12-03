# vmpooler-deployment

This repo contains Dockerfiles and a Helm chart that can be used to deploy [VMPooler](https://github.com/puppetlabs/vmpooler).

## Status

This repo is a work in progress. It mostly works but many bits need adjusting here and there as they were compiled from other locations. More details will be added soon.

## Helm Repository

The `docs/` folder in this repository represents a Helm repo served via GitHub Pages at https://puppetlabs.github.io/vmpooler-deployment/

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
git commit -a
```
