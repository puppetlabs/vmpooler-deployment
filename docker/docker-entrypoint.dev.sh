#!/bin/sh
set -e

bundle install

set -- rerun -- bundle exec vmpooler "$@"

exec "$@"
