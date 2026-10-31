/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800af1de */

undefined8 FUN_1800af1de(longlong *param_1,char *param_2)

{
  int iVar1;
  size_t _Size;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  _Size = strlen(param_2);
  if ((ulonglong)param_1[1] < _Size) {
    uVar2 = 0;
  }
  else {
    iVar1 = memcmp((void *)((param_1[1] - _Size) + *param_1),param_2,_Size);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}

