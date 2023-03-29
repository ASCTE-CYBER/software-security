vagrant destroy --force
vagrant box add software-security-lab ./software-security-lab.box --force
vagrant init software-security-lab
vagrant up
vagrant ssh
cmd /k
