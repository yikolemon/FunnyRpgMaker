/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400865c0 */

void FUN_1400865c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_1f8 [264];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x68);
  local_50 = param_2;
  for (lVar2 = *(longlong *)(param_1 + 0x60); lVar2 != lVar1; lVar2 = lVar2 + 0xde0) {
    FUN_14008d824(lVar2,local_70);
    FUN_14000892c(local_90,lVar2 + 0x28);
    FUN_14008ddee(local_1f8,local_90);
    local_60 = L"{}_{}";
    local_58 = 5;
    FUN_14008dd6f(local_f0,&local_60,lVar2 + 4,local_1f8);
    FUN_140005242(local_1f8);
    FUN_14000550c(local_1f8,local_f0,0);
    FUN_14007dcb3(local_d0,local_50,local_1f8);
    FUN_140005690(local_1f8);
    FUN_140087a7e(local_d0,".json");
    uVar3 = 0;
    FUN_140085d44(local_1f8,local_d0,2,0x40,1);
    FUN_140057f90(local_70,local_b0,4,0x20,uVar3 & 0xffffff00,0);
    FUN_1400058b9(local_1f8,local_b0);
    FUN_1400017de(local_b0);
    FUN_140085ecc(local_1f8);
    FUN_1400581a2(local_1f8);
    FUN_140005690(local_d0);
    FUN_140005242(local_f0);
    FUN_1400578a6(local_70);
  }
  return;
}

