/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100728f0 */

int __thiscall FUN_100728f0(undefined4 *param_1,char param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1 + 4;
  if (param_3 < *puVar1) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    iVar4 = *puVar1 + (int)param_1;
    iVar2 = FUN_100062be(param_3 + (int)param_1,iVar4,(int)param_2);
    iVar3 = -1;
    if (iVar2 != iVar4) {
      iVar3 = iVar2 - (int)param_1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

