/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b658c */

ulonglong FUN_1401b658c(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_1401c26b0(param_1,&DAT_140ee0300), iVar1 == 0)) {
    uVar3 = 0x20001004;
  }
  else {
    iVar1 = FUN_1401a0500(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_1401a0500(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_1401c26b0(param_1,&DAT_140ee02f8);
    if (iVar1 != 0) {
      uVar2 = FUN_1401bf544(param_1);
      return uVar2;
    }
    uVar3 = 0x2000000b;
  }
  uVar2 = FUN_1401af6c0(param_2 + 600,uVar3,local_res8,2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return (ulonglong)local_res8[0];
}

