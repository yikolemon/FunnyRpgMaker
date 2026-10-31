/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c244 */

byte * FUN_1002c244(byte *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char cVar8;
  uint uVar7;
  byte *pbVar9;
  undefined1 auStack_20 [3];
  undefined1 local_1d;
  undefined1 local_1c [12];
  uint local_10;
  
  piVar3 = param_3;
  pbVar6 = param_2;
  local_10 = DAT_10388d00 ^ (uint)auStack_20;
  bVar1 = *param_1;
  if ((byte)(bVar1 - 0x30) < 10) {
    if (bVar1 == 0x30) {
      param_1 = param_1 + 1;
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1002b53c(&param_1,param_2,0x7fffffff);
    }
    if ((param_1 == pbVar6) || ((*param_1 != 0x3a && (*param_1 != 0x7d)))) {
LAB_1002c318:
      local_1d = 1;
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_1c,&DAT_103607ac);
    }
    puVar2 = (undefined4 *)piVar3[1];
    *puVar2 = uVar4;
    puVar2[1] = 0;
    *(undefined4 *)piVar3[2] = 1;
    FUN_1002b5aa(uVar4);
    pbVar9 = param_1;
  }
  else {
    if ((bVar1 != 0x5f) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) goto LAB_1002c318;
    pbVar6 = param_1 + 1;
    do {
      pbVar5 = pbVar6;
      pbVar9 = param_2;
      if (pbVar5 == param_2) break;
      uVar7 = CONCAT11(*pbVar5,*pbVar5) & 0xffffffdf;
      cVar8 = (char)(uVar7 >> 8);
      pbVar6 = pbVar5 + 1;
    } while ((((byte)(cVar8 - 0x30U) < 10) || (cVar8 == '_')) ||
            (pbVar9 = pbVar5, (byte)((char)uVar7 + 0xbfU) < 0x1a));
    puVar2 = (undefined4 *)param_3[1];
    *puVar2 = param_1;
    puVar2[1] = (int)pbVar9 - (int)param_1;
    *(undefined4 *)param_3[2] = 2;
    *(undefined4 *)(*param_3 + 8) = 0xffffffff;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_20)) {
    return pbVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

