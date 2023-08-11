---
:dns_configs:
  ddns_domain: 'dynamic.example.com'
  :gcp-clouddns:
    project: vmpooler-example
    domain: vmpooler.example.com
    dns_zone_resource_name: vmpooler-example-com

:providers:
  # :gce:
  #   network_name: projects/vmpooler-example/global/networks/default
  #   project: vmpooler-example
  #   title: gce
  #   zone: us-west1-b

  :dummy:
    filename: '/tmp/dummy-backing.yaml'

:prometheus:
  prefix: 'vmpooler-local'

:redis:
  server: 'redis-server'

:auth:
  provider: 'dummy'

:config:
  site_name: 'vmpooler'
  logfile: '/var/log/vmpooler.log'
  task_limit: 10
  timeout: 15
  vm_checktime: 1
  vm_lifetime: 12
  vm_lifetime_auth: 24
  allowed_tags:
    - 'created_by'
    - 'project'

:pools:
  # - name: 'fedora-36-x86_64'
  #   template: 'projects/fedora-cloud/global/images/fedora-cloud-base-gcp-36-20220506-n-0-x86-64'
  #   size: 0
  #   provider: 'gce'
  #   dns_plugin: 'google-clouddns'
  #   machine_type: 'zones/us-west1-b/machineTypes/n1-standard-2'
  #   disk_type: 'pd-ssd'
  #   subnetwork_name: 'projects/vmpooler-example/regions/us-west1/subnetworks/default'
  - name: 'debian-11-x86_64'
    template: 'Templates/debian-11-x86_64'
    folder: 'Pooled VMs/debian-11-x86_64'
    datastore: 'vmstorage'
    size: 5
    timeout: 15
    ready_ttl: 1440
    provider: dummy
