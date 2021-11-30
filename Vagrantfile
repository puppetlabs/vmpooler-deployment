# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "genebean/almalinux-8-docker-ce"
  config.vm.network "forwarded_port", guest: 8080, host: 8080 # VMPooler api in docker-compose
  config.vm.network "forwarded_port", guest: 8081, host: 8081 # VMPooler manager in docker-compose
  config.vm.network "forwarded_port", guest: 8082, host: 8082 # Jaeger in docker-compose
  config.vm.provision "shell", inline: <<-SCRIPT
    mkdir /var/log/vmpooler
    chown vagrant:vagrant /var/log/vmpooler
    curl -L "https://github.com/docker/compose/releases/download/1.26.2/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose
    chmod +x /usr/local/bin/docker-compose
    ln -s /usr/local/bin/docker-compose /usr/bin/docker-compose
    docker-compose --version
  SCRIPT
end
