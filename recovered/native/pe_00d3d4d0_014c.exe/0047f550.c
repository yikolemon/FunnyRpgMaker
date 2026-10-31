/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f550 */

undefined4 * __thiscall FUN_0047f550(void *this,byte param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  *(undefined ***)this = std::locale::_Locimp::vftable;
  local_c = this;
  FUN_0047f2d0(&local_10,0);
  iVar5 = *(int *)((int)this + 0xc);
  local_8 = (int *)((int)this + 8);
  piVar3 = local_8;
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    piVar1 = *(int **)(*piVar3 + iVar5 * 4);
    this = local_c;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_00508898)();
      puVar4 = (undefined4 *)(*pcVar2)();
      piVar3 = local_8;
      this = local_c;
      if (puVar4 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar4;
        (*(code *)PTR_guard_check_icall_00508898)(1);
        (*pcVar2)();
        piVar3 = local_8;
        this = local_c;
      }
    }
  }
  thunk_FUN_00495f00((LPVOID)*piVar3);
  FUN_0047f310(&local_10);
  if (*(LPVOID *)((int)this + 0x18) != (LPVOID)0x0) {
    thunk_FUN_00495f00(*(LPVOID *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = std::_Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(this);
  }
  return this;
}

