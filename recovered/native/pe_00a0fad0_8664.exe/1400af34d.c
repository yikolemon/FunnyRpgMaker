/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400af34d */

void FUN_1400af34d(void)

{
  longlong lVar1;
  undefined8 **ppuVar2;
  undefined1 *local_990 [8];
  undefined1 local_950 [64];
  undefined1 local_910 [64];
  undefined1 local_8d0 [64];
  undefined1 local_890 [64];
  undefined1 local_850 [64];
  undefined1 local_810 [64];
  undefined1 local_7d0 [64];
  undefined1 local_790 [64];
  undefined1 local_750 [64];
  undefined1 local_710 [64];
  undefined1 local_6d0 [64];
  undefined1 local_690 [64];
  undefined1 local_650 [64];
  undefined1 local_610 [64];
  undefined1 local_5d0 [64];
  undefined1 local_590 [64];
  undefined1 local_550 [64];
  undefined1 local_510 [64];
  undefined1 local_4d0 [64];
  undefined1 local_490 [64];
  undefined1 local_450 [64];
  undefined1 local_410 [64];
  undefined1 local_3d0 [64];
  undefined1 local_390 [64];
  undefined1 local_350 [64];
  undefined1 local_310 [64];
  undefined1 local_2d0 [64];
  undefined1 local_290 [64];
  undefined1 local_250 [64];
  undefined1 local_210 [64];
  undefined1 local_1d0 [64];
  undefined1 local_190 [64];
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined8 *local_50;
  undefined1 **local_48;
  undefined1 **local_40;
  longlong local_38;
  undefined1 **local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = local_990;
  FUN_1400aec40(local_28,"dec_key_search_msg",L"Searching for decryption key ...");
  local_28 = (undefined8 *)local_950;
  FUN_1400aec40(local_28,"unpacked_msg",L"{} is already unpacked, skipping");
  local_28 = (undefined8 *)local_910;
  FUN_1400aec40(local_28,"unpacking_msg",L"Unpacking: {} ... ");
  local_28 = (undefined8 *)local_8d0;
  FUN_1400aec40(local_28,"done_msg",L"Done");
  local_28 = (undefined8 *)local_890;
  FUN_1400aec40(local_28,"failed_msg",L"Failed");
  local_28 = (undefined8 *)local_850;
  FUN_1400aec40(local_28,"pro_game_detected_msg",
                L"WolfPro game detected, trying to get decryption key ...");
  local_28 = (undefined8 *)local_810;
  FUN_1400aec40(local_28,"det_key_error_msg",L"Failed to find the decryption key");
  local_28 = (undefined8 *)local_7d0;
  FUN_1400aec40(local_28,"det_key_found_msg",L"Found the decryption key, restarting extraction");
  local_28 = (undefined8 *)local_790;
  FUN_1400aec40(local_28,"det_key_inj_msg",L"Trying to get decryption key using injection ... ");
  local_28 = (undefined8 *)local_750;
  FUN_1400aec40(local_28,"exec_game_inj_msg",L"Executing game and injecting DLL ... ");
  local_28 = (undefined8 *)local_710;
  FUN_1400aec40(local_28,"inj_error_msg",L"Injecting the DLL failed, stopping");
  local_28 = (undefined8 *)local_6d0;
  FUN_1400aec40(local_28,"search_game_msg",L"Searching for game executable in: {}");
  local_28 = (undefined8 *)local_690;
  FUN_1400aec40(local_28,"exe_found_msg",L"Found game executable: {}");
  local_28 = (undefined8 *)local_650;
  FUN_1400aec40(local_28,"exe_error_msg",L"Could not find the game executable");
  local_28 = (undefined8 *)local_610;
  FUN_1400aec40(local_28,"dll_copy_msg",L"Copying DLL from resource to {} ...");
  local_28 = (undefined8 *)local_5d0;
  FUN_1400aec40(local_28,"dll_copied_msg",L"DLL copied successfully");
  local_28 = (undefined8 *)local_590;
  FUN_1400aec40(local_28,"dll_error_msg_1",L"UberWolfLib: Failed to find resource");
  local_28 = (undefined8 *)local_550;
  FUN_1400aec40(local_28,"dll_error_msg_2",L"UberWolfLib: Failed to load resource");
  local_28 = (undefined8 *)local_510;
  FUN_1400aec40(local_28,"dll_error_msg_3",L"UberWolfLib: Failed to create file");
  local_28 = (undefined8 *)local_4d0;
  FUN_1400aec40(local_28,"key_file_warn_msg",
                L"WARNING: Unable to find DxArc key file, this does not look like a WolfPro game");
  local_28 = (undefined8 *)local_490;
  FUN_1400aec40(local_28,"inv_prot_key_error_msg",L"ERROR: Invalid protection key");
  local_28 = (undefined8 *)local_450;
  FUN_1400aec40(local_28,"dxarc_key_error_msg",L"ERROR: Unable to find DxArc key");
  local_28 = (undefined8 *)local_410;
  FUN_1400aec40(local_28,"remove_prot_error_msg",
                L"ERROR: Unable to remove protection, this does not look like a WolfPro game");
  local_28 = (undefined8 *)local_3d0;
  FUN_1400aec40(local_28,"data_dir_error_msg",
                L"ERROR: Unable to remove protection, data folder not set");
  local_28 = (undefined8 *)local_390;
  FUN_1400aec40(local_28,"unprot_dir_create_error_msg",
                L"ERROR: Unable to create unprotected folder ({})");
  local_28 = (undefined8 *)local_350;
  FUN_1400aec40(local_28,"decrypt_key_error_msg",L"ERROR: Unable to decrypt protection key file");
  local_28 = (undefined8 *)local_310;
  FUN_1400aec40(local_28,"prot_key_len_error_msg",L"ERROR: Invalid key length, exiting ...");
  local_28 = (undefined8 *)local_2d0;
  FUN_1400aec40(local_28,"open_file_error_msg",L"ERROR: Unable to open file \"{}\".");
  local_28 = (undefined8 *)local_290;
  FUN_1400aec40(local_28,"get_file_size_error_msg",L"ERROR: Unable to get file size for \"{}\".");
  local_28 = (undefined8 *)local_250;
  FUN_1400aec40(local_28,"read_file_error_msg",L"ERROR: Unable to read file \"{}\".");
  local_28 = (undefined8 *)local_210;
  FUN_1400aec40(local_28,"write_file_error_msg",L"ERROR: Unable to write file \"{}\".");
  local_28 = (undefined8 *)local_1d0;
  FUN_1400aec40(local_28,"find_file_error_msg",L"ERROR: Unable to find file \"{}\".");
  local_28 = (undefined8 *)local_190;
  FUN_1400aec40(local_28,"decrypt_error_msg",L"ERROR: Unable to decrypt protected file");
  local_28 = (undefined8 *)local_150;
  FUN_1400aec40(local_28,"unprot_file_loc",L"Unprotected files can be found in: {}");
  local_28 = (undefined8 *)local_110;
  FUN_1400aec40(local_28,"remove_prot",L"Removing protection from: {} ... ");
  local_28 = (undefined8 *)local_d0;
  FUN_1400aec40(local_28,"calc_prot_key_error_msg",L"ERROR: Unable to calculate protection key");
  local_28 = (undefined8 *)local_90;
  FUN_1400aec40(local_90,"invalid_pro_error_msg",
                L"ERROR: The Pro version of the game does not support this feature");
  local_50 = local_990;
  local_48 = (undefined1 **)&local_50;
  local_28 = (undefined8 *)local_90;
  FUN_1400aed40(&DAT_1401cc9c8);
  lVar1 = 0x8c0;
  local_30 = (undefined1 **)&local_50;
  do {
    ppuVar2 = (undefined8 **)(local_30 + -4);
    local_40 = local_30;
    local_38 = lVar1;
    local_30 = local_30 + -8;
    FUN_140005242(ppuVar2);
    FUN_1400017de(local_30);
    lVar1 = local_38 + -0x40;
  } while (local_30 != local_990);
  FUN_1400d3740(FUN_1400aee09);
  FUN_14000f628(&DAT_1401cc9d8,L"NO DEFAULT FOUND");
  FUN_1400d3740(&LAB_1400aee3c);
  return;
}

