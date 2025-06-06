# Changelog

## [3.9.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.9.0) (2025-06-05)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.8.3...3.9.0)

**Merged pull requests:**

- \(maint\) Update vmpooler to version 3.7.0 [\#162](https://github.com/puppetlabs/vmpooler-deployment/pull/162) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.8.3](https://github.com/puppetlabs/vmpooler-deployment/tree/3.8.3) (2025-01-30)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.8.2...3.8.3)

**Implemented enhancements:**

- Update memory limit for api pod to 4G [\#159](https://github.com/puppetlabs/vmpooler-deployment/pull/159) ([mahikalra](https://github.com/mahikalra))

## [3.8.2](https://github.com/puppetlabs/vmpooler-deployment/tree/3.8.2) (2024-07-25)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.7.0...3.8.2)

**Implemented enhancements:**

- \(RE-15696\) Local Development - Add Grafana and remove redis mount [\#147](https://github.com/puppetlabs/vmpooler-deployment/pull/147) ([yachub](https://github.com/yachub))

**Fixed bugs:**

- vsphere [\#153](https://github.com/puppetlabs/vmpooler-deployment/issues/153)

**Merged pull requests:**

- \(maint\) Burn the 3.8.0 release and try building again [\#156](https://github.com/puppetlabs/vmpooler-deployment/pull/156) ([e-gris](https://github.com/e-gris))
- \(maint\) empty commit for redeploy attempt [\#155](https://github.com/puppetlabs/vmpooler-deployment/pull/155) ([e-gris](https://github.com/e-gris))
- Bump jruby from 9.4.5.0-jdk11 to 9.4.7.0-jdk11 in /docker [\#152](https://github.com/puppetlabs/vmpooler-deployment/pull/152) ([dependabot[bot]](https://github.com/apps/dependabot))
- Bump jruby from 9.4.3.0-jdk11 to 9.4.5.0-jdk11 in /docker [\#149](https://github.com/puppetlabs/vmpooler-deployment/pull/149) ([dependabot[bot]](https://github.com/apps/dependabot))

## [3.7.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.7.0) (2023-10-05)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.6.0...3.7.0)

**Implemented enhancements:**

- Gem dependency updates [\#145](https://github.com/puppetlabs/vmpooler-deployment/pull/145) ([yachub](https://github.com/yachub))

**Fixed bugs:**

- \(RE-15163\) Call BGREWRITEAOF on the redis database every restart to reduce aof file size [\#144](https://github.com/puppetlabs/vmpooler-deployment/pull/144) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.6.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.6.0) (2023-09-07)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.5.3...3.6.0)

**Implemented enhancements:**

- \(RE-15565\) Make auth config customizable and remove default dummy auth [\#142](https://github.com/puppetlabs/vmpooler-deployment/pull/142) ([yachub](https://github.com/yachub))

## [3.5.3](https://github.com/puppetlabs/vmpooler-deployment/tree/3.5.3) (2023-08-30)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.5.2...3.5.3)

**Fixed bugs:**

- \(maint\) Update vmpooler-provider-vsphere to 3.3.4 [\#139](https://github.com/puppetlabs/vmpooler-deployment/pull/139) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.5.2](https://github.com/puppetlabs/vmpooler-deployment/tree/3.5.2) (2023-08-28)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.5.1...3.5.2)

**Fixed bugs:**

- \(maint\) Update vmpooler-provider-vsphere to 3.3.3 [\#137](https://github.com/puppetlabs/vmpooler-deployment/pull/137) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.5.1](https://github.com/puppetlabs/vmpooler-deployment/tree/3.5.1) (2023-08-24)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.5.0...3.5.1)

**Fixed bugs:**

- \(maint\) Bump vmpooler gem to 3.5.1 [\#135](https://github.com/puppetlabs/vmpooler-deployment/pull/135) ([yachub](https://github.com/yachub))

## [3.5.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.5.0) (2023-08-23)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.4.1...3.5.0)

**Implemented enhancements:**

- \(maint\) Update vmpooler to 3.5.0 and vmpooler-provider-vsphere to 3.3.2 [\#131](https://github.com/puppetlabs/vmpooler-deployment/pull/131) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.4.1](https://github.com/puppetlabs/vmpooler-deployment/tree/3.4.1) (2023-08-22)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.4.0...3.4.1)

**Fixed bugs:**

- \(RE-15710\) Bump vmpooler-provider-vsphere gem to 3.3.1 [\#129](https://github.com/puppetlabs/vmpooler-deployment/pull/129) ([yachub](https://github.com/yachub))

## [3.4.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.4.0) (2023-08-21)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.3.0...3.4.0)

**Implemented enhancements:**

- \(maint\) Update vmpooler to 3.4.0, vmpooler-provider-gce to 1.3.0, and… [\#124](https://github.com/puppetlabs/vmpooler-deployment/pull/124) ([isaac-hammes](https://github.com/isaac-hammes))

## [3.3.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.3.0) (2023-08-16)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.2.0...3.3.0)

**Implemented enhancements:**

- \(maint\) update redis\_reconnect\_attempts format and vmpooler gem [\#114](https://github.com/puppetlabs/vmpooler-deployment/pull/114) ([isaac-hammes](https://github.com/isaac-hammes))
- \(RE-15696\) Improve development experience [\#113](https://github.com/puppetlabs/vmpooler-deployment/pull/113) ([yachub](https://github.com/yachub))

**Closed issues:**

- Improve DevX [\#112](https://github.com/puppetlabs/vmpooler-deployment/issues/112)

## [3.2.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.2.0) (2023-08-10)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.1.0...3.2.0)

**Implemented enhancements:**

- Bump jruby and all vmpooler gems [\#110](https://github.com/puppetlabs/vmpooler-deployment/pull/110) ([yachub](https://github.com/yachub))
- \(RE-15638\) Make redis connection options configurable [\#108](https://github.com/puppetlabs/vmpooler-deployment/pull/108) ([yachub](https://github.com/yachub))

## [3.1.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.1.0) (2023-05-01)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/3.0.0...3.1.0)

**Implemented enhancements:**

- Explicit JDK Tag and Newer Java Compatibility [\#85](https://github.com/puppetlabs/vmpooler-deployment/issues/85)
- Bump all vmpooler gems [\#103](https://github.com/puppetlabs/vmpooler-deployment/pull/103) ([yachub](https://github.com/yachub))

**Merged pull requests:**

- Migrate issue management to Jira [\#102](https://github.com/puppetlabs/vmpooler-deployment/pull/102) ([yachub](https://github.com/yachub))
- Bump jruby from 9.4.1.0-jdk11 to 9.4.2.0-jdk11 in /docker [\#99](https://github.com/puppetlabs/vmpooler-deployment/pull/99) ([dependabot[bot]](https://github.com/apps/dependabot))

## [3.0.0](https://github.com/puppetlabs/vmpooler-deployment/tree/3.0.0) (2023-04-19)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/2.2.0...3.0.0)

**Breaking changes:**

- \(RE-15124\) Bump vmpooler, providers, and add new dns gem [\#92](https://github.com/puppetlabs/vmpooler-deployment/pull/92) ([yachub](https://github.com/yachub))

## [2.2.0](https://github.com/puppetlabs/vmpooler-deployment/tree/2.2.0) (2023-03-06)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/2.1.0...2.2.0)

**Implemented enhancements:**

- \(RE-15161\) Bump jruby to 9.4.1.0 and remove tcpsocket usage [\#97](https://github.com/puppetlabs/vmpooler-deployment/pull/97) ([yachub](https://github.com/yachub))

## [2.1.0](https://github.com/puppetlabs/vmpooler-deployment/tree/2.1.0) (2023-03-02)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/2.0.0...2.1.0)

**Merged pull requests:**

- \(maint\) Make additional options configurable in values file [\#95](https://github.com/puppetlabs/vmpooler-deployment/pull/95) ([yachub](https://github.com/yachub))

## [2.0.0](https://github.com/puppetlabs/vmpooler-deployment/tree/2.0.0) (2023-01-30)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.19.0...2.0.0)

**Implemented enhancements:**

- Bump vmpooler-provider-vsphere [\#84](https://github.com/puppetlabs/vmpooler-deployment/pull/84) ([yachub](https://github.com/yachub))
- Refactor docs and deployment [\#81](https://github.com/puppetlabs/vmpooler-deployment/pull/81) ([yachub](https://github.com/yachub))

**Fixed bugs:**

- .gitignore missed charts directory [\#39](https://github.com/puppetlabs/vmpooler-deployment/issues/39)

## [1.19.0](https://github.com/puppetlabs/vmpooler-deployment/tree/1.19.0) (2022-08-26)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.8.0-prod-all-providers...1.19.0)

**Merged pull requests:**

- \(RE-14811\) Remove DIO as codeowners [\#60](https://github.com/puppetlabs/vmpooler-deployment/pull/60) ([yachub](https://github.com/yachub))
- Add release-engineering to codeowners [\#55](https://github.com/puppetlabs/vmpooler-deployment/pull/55) ([yachub](https://github.com/yachub))
- \(maint\) Add the ec2 provider to our prod-all-providers Gemfile [\#54](https://github.com/puppetlabs/vmpooler-deployment/pull/54) ([sbeaulie](https://github.com/sbeaulie))

## [1.8.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.8.0-prod-all-providers) (2022-07-26)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.7.0-prod-all-providers...1.8.0-prod-all-providers)

**Merged pull requests:**

- \(maint\) Fix jruby startup [\#52](https://github.com/puppetlabs/vmpooler-deployment/pull/52) ([sbeaulie](https://github.com/sbeaulie))
- \(maint\) Remove invokedymanicyield=false that was a workaround for jru… [\#51](https://github.com/puppetlabs/vmpooler-deployment/pull/51) ([sbeaulie](https://github.com/sbeaulie))
- \(maint\) missing the archive [\#50](https://github.com/puppetlabs/vmpooler-deployment/pull/50) ([sbeaulie](https://github.com/sbeaulie))

## [1.7.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.7.0-prod-all-providers) (2022-07-25)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.6.0-prod-all-providers...1.7.0-prod-all-providers)

**Merged pull requests:**

- \(maint\) Upgrade to latest vmpooler with jruby 9.3.6 [\#49](https://github.com/puppetlabs/vmpooler-deployment/pull/49) ([sbeaulie](https://github.com/sbeaulie))
- \(DIO-3229\) Add non sensitive parameters as ENV vars, and expect the s… [\#48](https://github.com/puppetlabs/vmpooler-deployment/pull/48) ([sbeaulie](https://github.com/sbeaulie))
- Add a new values parameter overrideCmd [\#47](https://github.com/puppetlabs/vmpooler-deployment/pull/47) ([sbeaulie](https://github.com/sbeaulie))

## [1.6.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.6.0-prod-all-providers) (2022-06-21)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.5.0-prod-all-providers...1.6.0-prod-all-providers)

**Implemented enhancements:**

- \(DIO-3162\) Add support for disk\_type in gce [\#43](https://github.com/puppetlabs/vmpooler-deployment/pull/43) ([sbeaulie](https://github.com/sbeaulie))

**Merged pull requests:**

- \(DIO-3157\) Update ingress for k8s 1.22 [\#42](https://github.com/puppetlabs/vmpooler-deployment/pull/42) ([suckatrash](https://github.com/suckatrash))
- Update release-helm-charts.yml [\#41](https://github.com/puppetlabs/vmpooler-deployment/pull/41) ([sbeaulie](https://github.com/sbeaulie))
- Update release-helm-charts.yml [\#40](https://github.com/puppetlabs/vmpooler-deployment/pull/40) ([sbeaulie](https://github.com/sbeaulie))
- \(DIO-2812\) Add CI for charts [\#21](https://github.com/puppetlabs/vmpooler-deployment/pull/21) ([genebean](https://github.com/genebean))

## [1.5.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.5.0-prod-all-providers) (2022-04-19)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.4.0-prod-all-providers...1.5.0-prod-all-providers)

**Implemented enhancements:**

- Bump vmpooler-provider-gce gem to include hostname fix [\#37](https://github.com/puppetlabs/vmpooler-deployment/pull/37) ([yachub](https://github.com/yachub))

**Merged pull requests:**

- Deploy v1.11.1 [\#36](https://github.com/puppetlabs/vmpooler-deployment/pull/36) ([sbeaulie](https://github.com/sbeaulie))

## [1.4.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.4.0-prod-all-providers) (2022-04-07)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.3.0-prod-all-providers...1.4.0-prod-all-providers)

**Merged pull requests:**

- \(DIO-2833\) Bump the gemfile too since this is used for building the i… [\#35](https://github.com/puppetlabs/vmpooler-deployment/pull/35) ([sbeaulie](https://github.com/sbeaulie))
- \(DIO-2833\) Chart version using the latest code from vmpooler to suppo… [\#34](https://github.com/puppetlabs/vmpooler-deployment/pull/34) ([sbeaulie](https://github.com/sbeaulie))

## [1.3.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.3.0-prod-all-providers) (2022-03-30)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.2.0-prod-all-providers...1.3.0-prod-all-providers)

**Merged pull requests:**

- fix annotations [\#33](https://github.com/puppetlabs/vmpooler-deployment/pull/33) ([sbeaulie](https://github.com/sbeaulie))
- \(maint\) set extra\_config the same way we do the manager app [\#32](https://github.com/puppetlabs/vmpooler-deployment/pull/32) ([sbeaulie](https://github.com/sbeaulie))
- deploy chart v1.9.0 [\#31](https://github.com/puppetlabs/vmpooler-deployment/pull/31) ([sbeaulie](https://github.com/sbeaulie))
- \(maint\) Update redis version, add env REDIS\_RECONNECT\_ATTEMPTS [\#30](https://github.com/puppetlabs/vmpooler-deployment/pull/30) ([sbeaulie](https://github.com/sbeaulie))
- Including vmpooler-provider-gce in the Gemfile [\#22](https://github.com/puppetlabs/vmpooler-deployment/pull/22) ([sbeaulie](https://github.com/sbeaulie))

## [1.2.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.2.0-prod-all-providers) (2021-12-13)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.1.0-prod-all-providers...1.2.0-prod-all-providers)

**Merged pull requests:**

- Update vmpooler chart to accept image tag override [\#20](https://github.com/puppetlabs/vmpooler-deployment/pull/20) ([genebean](https://github.com/genebean))

## [1.1.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.1.0-prod-all-providers) (2021-12-13)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/1.0.0-prod-all-providers...1.1.0-prod-all-providers)

**Merged pull requests:**

- Update gemfiles post vsphere provider 1.5 release [\#19](https://github.com/puppetlabs/vmpooler-deployment/pull/19) ([genebean](https://github.com/genebean))

## [1.0.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/1.0.0-prod-all-providers) (2021-12-09)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/0.1.1-prod-all-providers...1.0.0-prod-all-providers)

**Merged pull requests:**

- General updates related to packaging [\#18](https://github.com/puppetlabs/vmpooler-deployment/pull/18) ([genebean](https://github.com/genebean))

## [0.1.1-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/0.1.1-prod-all-providers) (2021-12-09)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/0.1.0-prod-all-providers...0.1.1-prod-all-providers)

**Merged pull requests:**

- Update build workflow output [\#17](https://github.com/puppetlabs/vmpooler-deployment/pull/17) ([genebean](https://github.com/genebean))

## [0.1.0-prod-all-providers](https://github.com/puppetlabs/vmpooler-deployment/tree/0.1.0-prod-all-providers) (2021-12-09)

[Full Changelog](https://github.com/puppetlabs/vmpooler-deployment/compare/074778d0b021afefdffed1931228954f9adbd9f6...0.1.0-prod-all-providers)

**Merged pull requests:**

- Add dockerfile param to CI workflow [\#16](https://github.com/puppetlabs/vmpooler-deployment/pull/16) ([genebean](https://github.com/genebean))
- Add prod container setup [\#15](https://github.com/puppetlabs/vmpooler-deployment/pull/15) ([genebean](https://github.com/genebean))
- Add prod container setup [\#13](https://github.com/puppetlabs/vmpooler-deployment/pull/13) ([genebean](https://github.com/genebean))
- Bump vmpooler from `5f89131` to `3c61050` in /docker/test-all-providers [\#12](https://github.com/puppetlabs/vmpooler-deployment/pull/12) ([dependabot[bot]](https://github.com/apps/dependabot))
- Update docker setup for testing [\#11](https://github.com/puppetlabs/vmpooler-deployment/pull/11) ([genebean](https://github.com/genebean))
- Revert api's extra\_config param [\#10](https://github.com/puppetlabs/vmpooler-deployment/pull/10) ([genebean](https://github.com/genebean))
- Fix templating in api deployment [\#9](https://github.com/puppetlabs/vmpooler-deployment/pull/9) ([genebean](https://github.com/genebean))
- Bump default timoutes for redis health checks [\#8](https://github.com/puppetlabs/vmpooler-deployment/pull/8) ([genebean](https://github.com/genebean))
- Add more details to Helm repo section [\#5](https://github.com/puppetlabs/vmpooler-deployment/pull/5) ([genebean](https://github.com/genebean))
- Create Helm repository [\#4](https://github.com/puppetlabs/vmpooler-deployment/pull/4) ([genebean](https://github.com/genebean))
- Add icon to Helm chart [\#3](https://github.com/puppetlabs/vmpooler-deployment/pull/3) ([genebean](https://github.com/genebean))



\* *This Changelog was automatically generated by [github_changelog_generator](https://github.com/github-changelog-generator/github-changelog-generator)*
