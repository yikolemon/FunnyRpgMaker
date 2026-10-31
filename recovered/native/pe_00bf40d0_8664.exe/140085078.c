/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085078 */

ulonglong FUN_140085078(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar4 = 0x28;
  if (param_2 != (longlong *)0x0 && param_1 != (undefined8 *)0x0) {
    lVar1 = param_2[6];
    uVar4 = FUN_140085189(param_2);
    local_34 = (uint)uVar4;
    uVar4 = uVar4 & 0xffffffff;
    if (local_34 == 0) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[8] = 0;
      param_1[6] = lVar1;
      puVar2 = (undefined8 *)FUN_14001e961(lVar1,0x1108,(int *)&local_34);
      uVar4 = (ulonglong)local_34;
      if (local_34 == 0) {
        uVar3 = FUN_140085201(puVar2,(longlong)param_1,param_2);
        local_34 = (uint)uVar3;
        if (local_34 != 0) {
          FUN_14001c53d(lVar1,(longlong)puVar2);
          uVar4 = (ulonglong)local_34;
          goto LAB_140085153;
        }
        param_1[2] = puVar2;
      }
      param_1[1] = 0x7fffffff;
      *param_1 = 0;
      param_1[4] = &LAB_140085263;
      param_1[5] = FUN_14008526c;
    }
  }
LAB_140085153:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

