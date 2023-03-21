# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  # Configure VM running a web app
  config.vm.define "software-security" do |app|
    app.vm.box = "generic/debian11"
    app.vm.hostname = "sandbox-server"
    app.vm.network "private_network", ip: "192.168.56.112"
    app.vm.synced_folder "./bin", "/lab"
    app.vm.provider "virtualbox" do |vb|
      vb.gui = false
      vb.memory = "2048"
    end
    app.vm.provision "shell", inline: <<-SHELL
      sudo apt-get update -y
      #sudo apt-get upgrade -y
      sudo apt-get install gcc
    SHELL
    #app.vm.provision "shell", run: "always", inline: <<-SHELL
      #sudo docker rm -f php-webserver
    #SHELL
  end
end
