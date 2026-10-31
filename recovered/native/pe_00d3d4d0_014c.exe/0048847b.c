/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048847b */

int * __thiscall FUN_0048847b(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  piVar1 = (int *)((int)this + 4);
  if (param_1 == (int *)0x0) {
    puVar3 = PTR_PTR_0051af40;
    puVar5 = PTR_DAT_0051af44;
    if (DAT_005216fc != 0) {
      iVar4 = FUN_004961ad();
      *(int *)this = iVar4;
      *piVar1 = *(int *)(iVar4 + 0x4c);
      *(int *)((int)this + 8) = *(int *)(iVar4 + 0x48);
      ___acrt_update_locale_info(iVar4,piVar1);
      FUN_004966e6(*(int *)this,(int *)((int)this + 8));
      uVar2 = *(uint *)(*(int *)this + 0x350);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar2 | 2;
      *(undefined1 *)((int)this + 0xc) = 1;
      return this;
    }
  }
  else {
    puVar3 = (undefined *)*param_1;
    puVar5 = (undefined *)param_1[1];
  }
  *piVar1 = (int)puVar3;
  *(undefined **)((int)this + 8) = puVar5;
  return this;
}

