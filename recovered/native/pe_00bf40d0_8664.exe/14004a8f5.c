/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004a8f5 */

ulonglong FUN_14004a8f5(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  undefined4 extraout_var_01;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ushort local_36;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf) = 0;
  local_34 = FUN_14004b408(param_2,"%!PS-AdobeFont",0xe);
  uVar2 = CONCAT44(extraout_var,local_34);
  if (local_34 == 0) {
LAB_14004a98c:
    uVar2 = FUN_140020a41((longlong)param_2,0);
    local_34 = (uint)uVar2;
    if (local_34 == 0) {
      local_34 = FUN_14004b4c0(param_2,&local_36,&local_3c);
      uVar2 = CONCAT44(extraout_var_01,local_34);
      if (local_34 == 0) {
        if (local_36 == 0x8001) {
          *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
        }
        else {
          uVar2 = FUN_140020a41((longlong)param_2,0);
          local_34 = (uint)uVar2;
          if (local_34 != 0) goto LAB_14004a9b8;
          local_3c = *(uint *)(param_2 + 1);
        }
        uVar4 = local_3c;
        if (param_2[4] == 0) {
          param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
          *(uint *)(param_1 + 0x14) = local_3c;
          *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
          uVar2 = FUN_140020a93((longlong)param_2,local_3c);
          local_34 = (uint)uVar2;
          if (local_34 == 0) {
            uVar4 = *(uint *)(param_1 + 0x14);
LAB_14004aab6:
            lVar1 = param_1[0x13];
            param_1[1] = lVar1;
            *param_1 = lVar1;
            param_1[2] = (ulonglong)uVar4 + lVar1;
            uVar2 = 0;
            goto LAB_14004a9df;
          }
        }
        else {
          puVar3 = (undefined8 *)FUN_14001e961(param_3,local_3c,(int *)&local_34);
          param_1[0x13] = (longlong)puVar3;
          uVar2 = (ulonglong)local_34;
          if (local_34 == 0) {
            uVar2 = FUN_140020a85(param_2,puVar3,uVar4);
            local_34 = (uint)uVar2;
            if (local_34 == 0) {
              *(uint *)(param_1 + 0x14) = uVar4;
              goto LAB_14004aab6;
            }
          }
        }
      }
    }
  }
  else if ((char)local_34 == '\x02') {
    local_34 = FUN_14004b408(param_2,"%!FontType",10);
    uVar2 = CONCAT44(extraout_var_00,local_34);
    if (local_34 == 0) goto LAB_14004a98c;
  }
LAB_14004a9b8:
  if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
    FUN_14001c53d(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    uVar2 = (ulonglong)local_34;
  }
LAB_14004a9df:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

