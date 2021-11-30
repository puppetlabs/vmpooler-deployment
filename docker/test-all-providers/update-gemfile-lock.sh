#!/usr/bin/env bash

docker run -it --rm \
  -v $(pwd):/app \
  $(grep ^FROM ./Dockerfile |cut -d ' ' -f2) \
  /bin/bash -c 'apt-get update -qq && apt-get install -y --no-install-recommends make && cd /app && gem install bundler && bundle install --jobs 3'
