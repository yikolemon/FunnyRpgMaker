/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016eb10 */

undefined4 FUN_18016eb10(char *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  uVar1 = *(undefined8 *)(lVar2 + 0x1608);
  param_2 = param_2 + 0x11223347;
  if (param_1 != (char *)0x0) {
    param_2 = 0x11223347;
  }
  pcVar4 = "columns";
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
  }
  FUN_18011810d(param_2);
  uVar3 = FUN_180106d4e(uVar1,pcVar4,0);
  FUN_18011834f();
  return uVar3;
}

