# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  # Configure Ubuntu VM with C compiler installed
  config.vm.define "sandbox-server" do |app|
    app.vm.box = "generic/debian11"
    #app.vm.box = "ubuntu/lunar64"
    app.vm.hostname = "sandbox-server"
    app.vm.network "private_network", ip: "192.168.56.112"
    app.vm.synced_folder "./bin", "/lab"
    app.vm.synced_folder "./headers", "/usr/include/photos"
    app.vm.provider "virtualbox" do |vb|
      vb.gui = false
      vb.memory = "1024"
    end
    app.vm.provision "shell", inline: <<-SHELL
      #sudo apt-get update
      #sudo apt-get install gcc -y
      sudo sysctl -w kernel.randomize_va_space=0
      echo 'alias gcc="gcc -fno-stack-protector -z execstack -w -o connect"' >> .bashrc
      echo 'alias cls="clear"' >> .bashrc
      echo 'alias ll="ls -la"' >> .bashrc
    SHELL
    app.vm.provision "shell", run: "always", inline: <<-SHELL
      bash
      cd /lab
    SHELL
  end
end
