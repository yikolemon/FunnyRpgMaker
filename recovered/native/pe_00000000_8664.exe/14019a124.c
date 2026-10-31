/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019a124 */

undefined8 FUN_14019a124(longlong param_1,byte param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar2 = __pctype_func();
  if (-1 < (short)puVar2[param_2]) {
    return 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == pbVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x18) = pbVar4;
  }
  if (uVar3 == *(byte *)(param_1 + 0x39)) {
    return 1;
  }
  if (pbVar4 == *(byte **)(param_1 + 8)) {
LAB_14019a17c:
    if (pbVar4 == *(byte **)(param_1 + 8)) {
      return 0;
    }
    if (pbVar4 != pbVar1) goto LAB_14019a190;
  }
  else if ((pbVar4 != pbVar1) || (uVar3 != 0xffffffff)) {
    pbVar4 = pbVar4 + -1;
    *(byte **)(param_1 + 0x18) = pbVar4;
    goto LAB_14019a17c;
  }
  if (param_2 == 0xff) {
    return 0;
  }
LAB_14019a190:
  *(byte **)(param_1 + 0x18) = pbVar4 + -1;
  return 0;
}

