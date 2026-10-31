/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006287c */

int __thiscall FUN_1006287c(undefined4 *param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  
  sVar2 = _strlen(param_2);
  uVar1 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  uVar3 = uVar1;
  if (sVar2 < uVar1) {
    uVar3 = sVar2;
  }
  iVar4 = FUN_102595e0(param_1,param_2,uVar3);
  if (iVar4 == 0) {
    iVar4 = (int)(char)((uVar1 >= sVar2 && uVar1 != sVar2) - (uVar1 < sVar2));
  }
  return iVar4;
}

