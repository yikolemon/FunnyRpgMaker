/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048e84f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall <lambda_b57350f2640456a0859d250846f69caf>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
<lambda_b57350f2640456a0859d250846f69caf>::operator()
          (<lambda_b57350f2640456a0859d250846f69caf> *this)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  bool bVar6;
  
  __copytlocinfo_nolock
            ((undefined4 *)**(undefined4 **)this,*(undefined4 **)(**(int **)(this + 4) + 0x4c));
  iVar2 = FUN_0048e49f((ushort *)**(undefined4 **)this,**(int **)(this + 0xc),
                       (ushort *)**(undefined4 **)(this + 0x10));
  **(int **)(this + 8) = iVar2;
  if (iVar2 == 0) {
    FUN_0049ab9c(**(int **)this);
    FUN_0049ac1d(**(int **)this);
  }
  else {
    puVar3 = (ushort *)**(undefined4 **)(this + 0x10);
    if (puVar3 != (ushort *)0x0) {
      puVar5 = &DAT_0051af48;
      do {
        uVar1 = *puVar3;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_0048e8c0:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_0048e8c4;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_0048e8c0;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_0048e8c4:
      if (uVar4 != 0) {
        LOCK();
        DAT_005216fc = 1;
        UNLOCK();
      }
    }
    __updatetlocinfoEx_nolock
              ((int *)(**(int **)(this + 4) + 0x4c),(undefined **)**(undefined4 **)this);
    FUN_0049ab9c(**(int **)this);
    if (((*(byte *)(**(int **)(this + 4) + 0x350) & 2) == 0) && (((byte)DAT_0051b640 & 1) == 0)) {
      __updatetlocinfoEx_nolock((int *)&DAT_00521b90,*(undefined ***)(**(int **)(this + 4) + 0x4c));
      PTR_PTR_0051ae50 = (undefined *)DAT_00521b90[0x22];
      PTR_DAT_0051ade8 = (undefined *)*DAT_00521b90;
      _DAT_0051af4c = DAT_00521b90[1];
      return;
    }
  }
  return;
}

