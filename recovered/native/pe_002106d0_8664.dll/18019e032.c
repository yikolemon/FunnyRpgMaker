/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e032 */

void switchD_18019dc7b::caseD_ff
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0a0);
  bVar1 = *(byte *)(param_4 + 1);
  if ((bVar1 == 0x25) || (bVar1 == 0x15)) {
    uVar2 = 0xffffffffffffffff;
    if (((*(byte *)(param_1 + 0x1c) & 0xfe) != 100) &&
       ((puVar3 = (undefined8 *)(*(int *)(param_4 + 2) + param_4 + 6), DAT_18044f000 == 0 ||
        ((DAT_18044f008 <= puVar3 && (puVar3 < DAT_180404640)))))) {
      uVar2 = *puVar3;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
    if (((bVar1 & 0x30) != 0x20) && ((bVar1 & 0x30) != 0x10)) {
      return;
    }
  }
  **(undefined8 **)(param_1 + 0x20) = uVar2;
  return;
}

