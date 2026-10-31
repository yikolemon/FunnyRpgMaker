/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483140 */

void __thiscall FUN_00483140(void *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = FUN_00483420(param_1);
  pcVar1 = *(code **)(*piVar3 + 0xc);
  (*(code *)PTR_guard_check_icall_00508898)();
  cVar2 = (*pcVar1)();
  if (cVar2 != '\0') {
    *(undefined4 *)((int)this + 0x38) = 0;
    return;
  }
  *(int **)((int)this + 0x38) = piVar3;
  *(undefined4 **)((int)this + 0xc) = (undefined4 *)((int)this + 4);
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x20) = (undefined4 *)((int)this + 0x18);
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x24);
  *(undefined4 **)((int)this + 0x30) = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}

