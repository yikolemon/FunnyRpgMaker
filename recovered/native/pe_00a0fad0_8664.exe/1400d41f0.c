/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d41f0 */

_iobuf * FUN_1400d41f0(char *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  _iobuf *p_Var3;
  uint uVar4;
  
  uVar1 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar1 = param_2;
  }
  uVar4 = uVar1 | 2;
  if ((uVar1 & 8) == 0) {
    uVar4 = uVar1;
  }
  iVar2 = 0;
  uVar1 = DAT_1401c96a0;
  while (uVar1 != (uVar4 & 0xffffffbb)) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x14) {
      return (_iobuf *)0x0;
    }
    uVar1 = (&DAT_1401c96a0)[iVar2];
  }
  p_Var3 = common_fsopen<char>(param_1,(&PTR_DAT_140142e30)[iVar2],param_3);
  if (p_Var3 != (_iobuf *)0x0) {
    if (((param_2 & 4) == 0) || (iVar2 = FUN_140113f48(p_Var3,0,2), iVar2 == 0)) {
      return p_Var3;
    }
    FUN_140115998(p_Var3);
  }
  return (_iobuf *)0x0;
}

