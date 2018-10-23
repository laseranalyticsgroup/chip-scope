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
		<Item Name="Close OBIS laser.vi" Type="VI" URL="../Laser subVIs/Close OBIS laser.vi"/>
		<Item Name="Laser Tester.vi" Type="VI" URL="../Laser subVIs/Laser Tester.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="instr.lib" Type="Folder">
				<Item Name="MDT_COMMAND_LIB_win32.dll" Type="Document" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Data/MDT_COMMAND_LIB_win32.dll"/>
				<Item Name="MDT_COMMAND_LIB_x64.dll" Type="Document" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Data/MDT_COMMAND_LIB_x64.dll"/>
				<Item Name="Thorlabs_MDT69xB.lvlib" Type="Library" URL="/&lt;instrlib&gt;/Thorlabs_MDT69xB/Thorlabs_MDT69xB.lvlib"/>
			</Item>
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
			</Item>
			<Item Name="Initialise OBIS laser.vi" Type="VI" URL="../Laser subVIs/Initialise OBIS laser.vi"/>
			<Item Name="send and receive.vi" Type="VI" URL="/C/Users/Chip Scope/Desktop/LabVIEW development/OBIS LV Examples LV2012/Laser head plus controller/send and receive.vi"/>
			<Item Name="Set laser power.vi" Type="VI" URL="../Laser subVIs/Set laser power.vi"/>
			<Item Name="Switch laser on-off.vi" Type="VI" URL="../Laser subVIs/Switch laser on-off.vi"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
