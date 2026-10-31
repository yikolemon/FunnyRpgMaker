/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004ce60 */

int __fastcall FUN_1004ce60(undefined4 *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_c [3];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_c;
  *(ulonglong *)(param_1 + 5) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20) + 1,
                (int)*(undefined8 *)(param_1 + 5) + 1);
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
    uVar3 = param_1[3];
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*pbVar1;
      *param_1 = pbVar1 + 1;
    }
    param_1[3] = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    iVar4 = -1;
  }
  else {
    local_9 = (undefined1)uVar3;
    puVar2 = (undefined1 *)param_1[9];
    if (puVar2 == (undefined1 *)param_1[10]) {
      FUN_1004cf34(puVar2,&local_9);
    }
    else {
      *puVar2 = local_9;
      param_1[9] = param_1[9] + 1;
    }
    iVar4 = param_1[3];
    if (iVar4 == 10) {
      param_1[7] = param_1[7] + 1;
      param_1[6] = 0;
      iVar4 = 10;
    }
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_c)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

