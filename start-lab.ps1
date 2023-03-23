$sleep_interval = 5
vagrant destroy --force
Start-Sleep -Seconds $sleep_interval
vagrant up
Start-Sleep -Seconds $sleep_interval
vagrant ssh
