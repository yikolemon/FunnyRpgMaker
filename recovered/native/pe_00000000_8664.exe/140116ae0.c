/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116ae0 */

undefined4 FUN_140116ae0(char *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  lVar2 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  uVar1 = *(undefined8 *)(lVar2 + 0x1608);
  param_2 = param_2 + 0x11223347;
  if (param_1 != (char *)0x0) {
    param_2 = 0x11223347;
  }
  pcVar4 = "columns";
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
  }
  FUN_140091425(param_2);
  uVar3 = FUN_140080066(uVar1,pcVar4,0);
  FUN_140091667();
  return uVar3;
}

