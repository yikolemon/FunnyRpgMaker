/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169777 */

undefined4 FUN_10169777(char *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  param_2 = param_2 + 0x11223347;
  if (param_1 != (char *)0x0) {
    param_2 = 0x11223347;
  }
  pcVar2 = "columns";
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
  }
  FUN_10113358(param_2);
  uVar1 = FUN_101021d4(pcVar2,0);
  FUN_10113568();
  return uVar1;
}

