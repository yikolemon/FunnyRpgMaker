/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ac948 */

ulonglong FUN_1404ac948(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_1404b8040(param_1,"n."), iVar1 == 0)) {
    uVar3 = 0x20001004;
  }
  else {
    iVar1 = FUN_140491e40(param_1,&DAT_14059c1f8);
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_140491e40(param_1,L"t_strtox::floating_point_value::as_double");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_1404b8040(param_1,"xpression.");
    if (iVar1 != 0) {
      uVar2 = FUN_1404b3804(param_1);
      return uVar2;
    }
    uVar3 = 0x2000000b;
  }
  uVar2 = FUN_1404a2ff0(param_2 + 600,uVar3,local_res8,2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (ulonglong)local_res8[0];
}

