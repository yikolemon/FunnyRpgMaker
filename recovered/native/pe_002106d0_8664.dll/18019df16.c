/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019df16 */

byte * switchD_18019dc7b::caseD_70
                 (longlong param_1,undefined8 param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = -4;
  bVar1 = param_4[1];
  **(undefined8 **)(param_1 + 0x20) = param_4 + (longlong)(char)bVar1 + 2;
  if (*param_4 == 0xeb) {
    *param_3 = 0xe9;
    iVar3 = -3;
    uVar4 = 3;
    lVar2 = 1;
  }
  else {
    *param_3 = 0xf;
    param_3[1] = *param_4 & 0xf | 0x80;
    uVar4 = 4;
    lVar2 = 2;
  }
  *(int *)(param_3 + lVar2) = (int)(char)bVar1 + iVar3 + ((int)param_4 - (int)param_3);
  **(undefined4 **)(param_1 + 0x28) = uVar4;
  return param_4 + 2;
}

