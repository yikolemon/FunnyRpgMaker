/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029cd70 */

undefined8 FUN_14029cd70(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  longlong unaff_GS_OFFSET;
  undefined1 local_c8 [56];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 ***local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  uVar1 = FUN_140289b16(param_1 + 0x10);
  if (uVar1 != 0) {
    local_48 = (undefined8 ***)(ulonglong)uVar1;
    FUN_1402889dc(param_1,&local_68);
    if (DAT_140629188 == '\x01') {
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_1402138f8(&local_48,local_68,
                    (local_60 - local_68) - (ulonglong)(*(char *)(local_60 + -1) == '\0'));
      if (*(int *)(*(longlong *)
                    (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_140629530 * 8) + 0x2c) <
          DAT_140629290) {
        FUN_14044e9d0(&DAT_140629290);
        if (DAT_140629290 == -1) {
          FUN_14028792e(&DAT_140629218);
          FUN_14044ebe0(&DAT_14029d27a);
          _Init_thread_footer(&DAT_140629290);
        }
      }
      ppppuVar2 = &local_48;
      if (0xf < uStack_30) {
        ppppuVar2 = (undefined8 ****)local_48;
      }
      FUN_14029d286(&DAT_140629218,param_2,ppppuVar2,local_38 + (longlong)ppppuVar2);
      FUN_1402133c2(&local_48);
    }
    else {
      FUN_14029d102(param_2,&local_68);
    }
    FUN_1402161ba(&local_68);
    return param_2;
  }
  local_24[0] = *(int *)(param_1 + 0x38) + -4;
  local_90 = 0x5f00000121;
  local_88 = "ion";
  local_80 = "";
  FUN_140283ef0(&local_68);
  local_78 = 
  "Hello from Stacked The First\nUsing style.Colors[ImGuiCol_ModalWindowDimBg] behind it.";
  local_70 = 0x34;
  FUN_14029d083(&local_48,&local_78,&local_68,local_24);
  FUN_140280e42(local_c8,&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_c8,&DAT_1405b7880);
}

