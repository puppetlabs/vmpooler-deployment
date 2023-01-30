#!/usr/bin/env bash

docker run --rm -it -v $(pwd):/apps --entrypoint /bin/sh alpine/helm \
  -c 'helm repo add bitnami https://charts.bitnami.com/bitnami && cd /apps/helm-charts/vmpooler && helm dependency update && cd /apps/docs && helm package ../helm-charts/* && helm repo index --url https://puppetlabs.github.io/vmpooler-deployment/ .'
