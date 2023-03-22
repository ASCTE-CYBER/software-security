# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  # Configure Ubuntu VM with C compiler installed
  config.vm.define "sandbox-server" do |app|
    app.vm.box = "ubuntu/lunar64"
    app.vm.hostname = "sandbox-server"
    app.vm.network "private_network", ip: "192.168.56.112"
    app.vm.synced_folder "./bin", "/home/vagrant"
    app.vm.synced_folder "./headers", "/usr/include/lab"
    #app.vm.synced_folder "./packages", "/packages"
    app.vm.boot_timeout = 600
    app.vm.provider "virtualbox" do |vb|
      vb.gui = false
      vb.memory = "2048"
    end
    app.vm.provision "shell", inline: <<-SHELL
      sudo apt update -y
      #sudo apt upgrade -y
      sudo apt install gcc -y
      sudo sysctl -w kernel.randomize_va_space=0
      echo 'alias gcc="gcc -fno-stack-protector -w -o connect"' >> .bashrc
      echo 'alias cls="clear"' >> .bashrc
      #cd /packages
      #tar xzf gcc-3.3.1.tar.gz
      #cd gcc-3.3.1
      #./contrib/download_prerequisites
      #cd ..
      #mkdir objdir
      #cd objdir
      #$PWD/../gcc-3.3.1/configure --prefix=$HOME/GCC-3.3.1 --enable-languages=c
      ##make
      make install
    SHELL
    app.vm.provision "shell", reboot: true
    app.vm.provision "shell", run: "always", inline: <<-SHELL
      bash
    SHELL
  end
end
