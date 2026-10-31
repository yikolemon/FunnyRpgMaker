/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004802d0 */

uint __thiscall FUN_004802d0(void *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  wint_t wVar3;
  uint uVar4;
  undefined2 extraout_var;
  FILE *_File;
  undefined4 *puVar5;
  
  uVar4 = **(uint **)((int)this + 0x1c);
  if (((uVar4 != 0) && (**(uint **)((int)this + 0xc) < uVar4)) &&
     ((param_1 == 0xffff || (*(ushort *)(uVar4 - 2) == param_1)))) {
    **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
    **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -2;
    uVar4 = (uint)param_1;
    if (param_1 == 0xffff) {
      uVar4 = 0;
    }
    return uVar4;
  }
  _File = *(FILE **)((int)this + 0x4c);
  if ((_File != (FILE *)0x0) && (param_1 != 0xffff)) {
    if (*(int *)((int)this + 0x38) == 0) {
      wVar3 = _ungetwc(param_1,_File);
      puVar5 = (undefined4 *)CONCAT22(extraout_var,wVar3);
      if (wVar3 != 0xffff) goto LAB_00480372;
    }
    _File = *(FILE **)((int)this + 0x1c);
    puVar1 = (ushort *)((int)this + 0x3c);
    if ((ushort *)_File->_ptr != puVar1) {
      *puVar1 = param_1;
      puVar2 = (ushort *)**(int **)((int)this + 0xc);
      if (puVar2 != puVar1) {
        *(ushort **)((int)this + 0x50) = puVar2;
        *(int *)((int)this + 0x54) = **(int **)((int)this + 0x1c) + **(int **)((int)this + 0x2c) * 2
        ;
      }
      **(int **)((int)this + 0xc) = (int)puVar1;
      **(int **)((int)this + 0x1c) = (int)puVar1;
      puVar5 = *(undefined4 **)((int)this + 0x2c);
      *puVar5 = 1;
LAB_00480372:
      return CONCAT22((short)((uint)puVar5 >> 0x10),param_1);
    }
  }
  return CONCAT22((short)((uint)_File >> 0x10),0xffff);
}

