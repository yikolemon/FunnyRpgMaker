/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002adf0 */

byte * FUN_1002adf0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined1 local_20 [12];
  uint local_14;
  
  iVar2 = param_3;
  pbVar4 = param_2;
  local_14 = DAT_10388d00 ^ (uint)auStack_24;
  bVar1 = *param_1;
  if ((byte)(bVar1 - 0x30) < 10) {
    if (bVar1 == 0x30) {
      param_1 = param_1 + 1;
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1002b53c(&param_1,param_2,0x7fffffff);
    }
    if ((param_1 == pbVar4) || ((*param_1 != 0x3a && (*param_1 != 0x7d)))) {
LAB_1002aeb0:
      local_21 = 1;
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_20,&DAT_103607ac);
    }
    FUN_1002b5aa(uVar6);
    *(undefined4 *)(iVar2 + 4) = uVar6;
    pbVar5 = param_1;
  }
  else {
    if ((bVar1 != 0x5f) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) goto LAB_1002aeb0;
    pbVar4 = param_1 + 1;
    do {
      pbVar3 = pbVar4;
      pbVar5 = param_2;
      if (pbVar3 == param_2) break;
      bVar1 = *pbVar3;
      pbVar4 = pbVar3 + 1;
    } while ((((byte)(bVar1 - 0x30) < 10) || (bVar1 == 0x5f)) ||
            (pbVar5 = pbVar3, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a));
    uVar6 = FUN_1002b610(param_1,(int)pbVar5 - (int)param_1);
    *(undefined4 *)(iVar2 + 4) = uVar6;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_24)) {
    return pbVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

