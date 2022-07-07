# Run vmpooler in a Docker container!  Configuration can either be embedded
# and built within the current working directory, or stored in a
# VMPOOLER_CONFIG environment value and passed to the Docker daemon.
#
# BUILD:
#   docker build -t vmpooler .
#
# RUN:
#   docker run -e VMPOOLER_CONFIG -p 80:4567 -it vmpooler

FROM jruby:9.2-jdk

LABEL org.opencontainers.image.description "VMPooler and known providers pulled directly from Git"

ENV DEBIAN_FRONTEND=noninteractive
ENV LOGFILE=/dev/stdout
ENV RACK_ENV=production

RUN apt-get update -qq && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends make && \
    apt-get clean autoclean && \
    apt-get autoremove -y && \
    rm -rf /var/lib/apt/lists/*

RUN gem install bundler && \
    gem update --system 3.2.3

COPY ./docker-entrypoint.sh /usr/local/bin/

RUN chmod +x /usr/local/bin/docker-entrypoint.sh

COPY ./Gemfile* ./

RUN bundle config set --local jobs 3 && \
    bundle install

ENTRYPOINT ["docker-entrypoint.sh"]
