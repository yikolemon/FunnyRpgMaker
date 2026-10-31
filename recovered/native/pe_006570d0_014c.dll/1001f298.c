/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f298 */

void __thiscall FUN_1001f298(int param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059550;
  local_18 = ExceptionList;
  iVar2 = *(int *)(param_1 + 4);
  puVar3 = *(undefined4 **)(iVar2 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = &local_18;
    puVar3 = (undefined4 *)FUN_10228350(0x20);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 **)(iVar2 + 0x18) = puVar3;
  }
  pbVar1 = (byte *)((int)puVar3 + (uint)(param_2 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  ExceptionList = local_18;
  return;
}

