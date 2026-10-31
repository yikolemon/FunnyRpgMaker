/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047933c */

void __thiscall
FUN_0047933c(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = -param_2;
  if ((int)-param_2 < 0) {
    uVar3 = param_2;
  }
  uVar2 = -param_5;
  if ((int)-param_5 < 0) {
    uVar2 = param_5;
  }
  puVar1 = (undefined8 *)&param_4;
  if (uVar2 < uVar3) {
    puVar1 = (undefined8 *)&param_1;
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)this = *puVar1;
  return;
}

