/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c730 */

byte * FUN_18002c730(byte *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  byte *local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  bVar1 = *param_1;
  local_40 = param_1;
  if ((byte)(bVar1 - 0x30) < 10) {
    if (bVar1 == 0x30) {
      local_40 = param_1 + 1;
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_18002bb19(&local_40,param_2,0x7fffffff);
    }
    if ((local_40 == param_2) || ((*local_40 != 0x3a && (*local_40 != 0x7d)))) {
LAB_18002c81f:
      local_41 = 1;
      FUN_180025c48(local_38,"invalid format string");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_38,&DAT_180391580);
    }
    *(undefined4 *)param_3[1] = uVar3;
    *(undefined4 *)param_3[2] = 1;
    FUN_18002bb8a(*param_3,uVar3);
    pbVar6 = local_40;
  }
  else {
    if ((bVar1 != 0x5f) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) goto LAB_18002c81f;
    pbVar5 = param_1 + 1;
    do {
      pbVar4 = pbVar5;
      pbVar6 = param_2;
      if (pbVar4 == param_2) break;
      bVar1 = *pbVar4;
      pbVar5 = pbVar4 + 1;
    } while ((((byte)(bVar1 - 0x30) < 10) || (bVar1 == 0x5f)) ||
            (pbVar6 = pbVar4, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a));
    puVar2 = (undefined8 *)param_3[1];
    *puVar2 = param_1;
    puVar2[1] = (longlong)pbVar6 - (longlong)param_1;
    *(undefined4 *)param_3[2] = 2;
    *(undefined4 *)(*param_3 + 0x10) = 0xffffffff;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return pbVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

