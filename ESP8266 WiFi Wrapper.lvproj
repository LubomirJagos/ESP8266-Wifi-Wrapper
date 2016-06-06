﻿<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="ESP8266 WiFi Wrapper.lvlib" Type="Library" URL="../ESP8266 WiFi Wrapper.lvlib"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Arduino Compatible Compiler for LabVIEW.lvlib" Type="Library" URL="/&lt;vilib&gt;/Aledyne-TSXperts/Arduino Compatible Compiler for LabVIEW/Arduino Compatible Compiler for LabVIEW.lvlib"/>
				<Item Name="UDP Begin Packet IP.vi" Type="VI" URL="/&lt;vilib&gt;/Aledyne-TSXperts/Arduino Compatible Compiler for LabVIEW/addons/ESP8266 WiFi Wrapper/UDP Begin Packet IP.vi"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
