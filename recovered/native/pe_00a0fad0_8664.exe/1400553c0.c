/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400553c0 */

undefined8 FUN_1400553c0(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_148 [16];
  undefined1 local_138 [240];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = 1;
  if (*(char *)(param_1 + 0x130) == '\x01') {
    if (*param_2 == '\0') {
      uVar2 = FUN_1400554d2();
      FUN_14000169c(local_48,"dec_key_search_msg");
      uVar2 = FUN_1400aebe4(uVar2,local_48);
      FUN_140052d74(local_148,&DAT_1401cc970,uVar2);
      FUN_140052e4f(local_138);
      FUN_140052e84(local_148);
      FUN_1400017de(local_48);
    }
    iVar1 = FUN_140055572(param_1,param_2);
    uVar2 = 6;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

