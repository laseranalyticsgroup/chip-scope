<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="17008000">
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
		<Item Name="Piezo subVIs" Type="Folder" URL="../Piezo subVIs">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="ChipScope Control.vi" Type="VI" URL="../ChipScope Control.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="instr.lib" Type="Folder">
				<Item Name="MDT_COMMAND_LIB_win32.dll" Type="Document" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Data/MDT_COMMAND_LIB_win32.dll"/>
				<Item Name="MDT_COMMAND_LIB_x64.dll" Type="Document" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Data/MDT_COMMAND_LIB_x64.dll"/>
				<Item Name="Thorlabs_MDT69xB.lvlib" Type="Library" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Thorlabs_MDT69xB.lvlib"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
