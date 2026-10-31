/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e0c4 */

void FUN_14022e0c4(longlong *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar1 == pbVar2) {
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x75) = 0;
    return;
  }
  bVar7 = *pbVar1;
  *(byte *)((longlong)param_1 + 0x75) = bVar7;
  lVar5 = FUN_1404b9620(&DAT_1404c29f0,(int)(char)bVar7,0x17);
  if (lVar5 == 0) goto LAB_14022e1f5;
  *(uint *)(param_1 + 0xe) = (uint)bVar7;
  if (bVar7 < 0x3f) {
    if (bVar7 < 0x28) {
      if (bVar7 == 10) {
        if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
          return;
        }
        if (*(int *)((longlong)param_1 + 0x14) != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xe) = 0x7c;
        return;
      }
      if (bVar7 != 0x24) {
        return;
      }
      uVar6 = (uint)param_1[0xc];
      if ((uVar6 >> 0x18 & 1) == 0) {
        return;
      }
      if (pbVar1 + 1 == pbVar2) {
        return;
      }
      bVar7 = pbVar1[1];
      if (bVar7 == 0x5c) {
        bVar3 = FUN_14022e352(param_1);
        bVar7 = pbVar1[(ulonglong)bVar3 + 1];
        uVar6 = (uint)param_1[0xc];
      }
      else {
        bVar3 = 0;
      }
      if (((*(int *)((longlong)param_1 + 0x14) == 0 && bVar7 == 10) & (byte)((uVar6 & 4) >> 2)) != 0
         ) {
        return;
      }
      bVar7 = bVar3 & bVar7 == 0x29 & *(int *)((longlong)param_1 + 0x14) != 0;
    }
    else {
      if (1 < bVar7 - 0x28) {
        if (bVar7 != 0x2b) {
          return;
        }
        goto LAB_14022e1d2;
      }
      bVar7 = *(byte *)(param_1 + 0xc) & 8;
    }
  }
  else if (bVar7 < 0x7b) {
    if (bVar7 != 0x3f) {
      if (bVar7 != 0x5c) {
        return;
      }
      cVar4 = FUN_14022e352(param_1,pbVar1);
      if (cVar4 == '\0') {
        return;
      }
      bVar7 = *(byte *)(*param_1 + 1);
      *(byte *)((longlong)param_1 + 0x75) = bVar7;
      *(uint *)(param_1 + 0xe) = (uint)bVar7;
      return;
    }
LAB_14022e1d2:
    bVar7 = *(byte *)(param_1 + 0xc) & 1;
  }
  else {
    if (bVar7 != 0x7b) {
      if (bVar7 == 0x7c) {
        bVar7 = *(byte *)(param_1 + 0xc) & 2;
        goto joined_r0x00014022e15a;
      }
      if (bVar7 != 0x7d) {
        return;
      }
    }
    bVar7 = *(byte *)(param_1 + 0xc) & 0x10;
  }
joined_r0x00014022e15a:
  if (bVar7 != 0) {
    return;
  }
LAB_14022e1f5:
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}

