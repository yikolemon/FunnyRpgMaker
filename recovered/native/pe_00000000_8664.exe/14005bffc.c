/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005bffc */

void FUN_14005bffc(undefined8 param_1,undefined1 *param_2,char param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  
  *param_2 = 0x25;
  if ((param_4 & 0x20) == 0) {
    puVar1 = (undefined2 *)(param_2 + 1);
  }
  else {
    puVar1 = (undefined2 *)(param_2 + 2);
    param_2[1] = 0x2b;
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar1 = 0x23;
    puVar1 = (undefined2 *)((longlong)puVar1 + 1);
  }
  *puVar1 = 0x2a2e;
  if (param_3 == '\0') {
    puVar1 = puVar1 + 1;
  }
  else {
    *(char *)(puVar1 + 1) = param_3;
    puVar1 = (undefined2 *)((longlong)puVar1 + 3);
  }
  uVar2 = 0x41464547;
  if ((param_4 & 4) == 0) {
    uVar2 = 0x61666567;
  }
  *(char *)puVar1 = (char)(uVar2 >> ((byte)(param_4 >> 9) & 0x18));
  *(undefined1 *)((longlong)puVar1 + 1) = 0;
  return;
}

