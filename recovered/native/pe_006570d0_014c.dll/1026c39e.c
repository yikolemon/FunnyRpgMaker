/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c39e */

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
  
  __copytlocinfo_nolock(**(undefined4 **)this,*(undefined4 *)(**(int **)(this + 4) + 0x4c));
  iVar2 = FUN_1026bfee(**(undefined4 **)this,**(undefined4 **)(this + 0xc),
                       **(undefined4 **)(this + 0x10));
  **(int **)(this + 8) = iVar2;
  if (iVar2 == 0) {
    FUN_1027be80(**(undefined4 **)this);
    FUN_1027bf01(**(undefined4 **)this);
  }
  else {
    puVar3 = (ushort *)**(undefined4 **)(this + 0x10);
    if (puVar3 != (ushort *)0x0) {
      puVar5 = &DAT_1039b4c8;
      do {
        uVar1 = *puVar3;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_1026c40f:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_1026c413;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_1026c40f;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_1026c413:
      if (uVar4 != 0) {
        LOCK();
        DAT_103a5004 = 1;
        UNLOCK();
      }
    }
    __updatetlocinfoEx_nolock(**(int **)(this + 4) + 0x4c,**(undefined4 **)this);
    FUN_1027be80(**(undefined4 **)this);
    if (((*(byte *)(**(int **)(this + 4) + 0x350) & 2) == 0) && (((byte)DAT_1039bbd0 & 1) == 0)) {
      __updatetlocinfoEx_nolock(&DAT_103a50f0,*(undefined4 *)(**(int **)(this + 4) + 0x4c));
      PTR_PTR_1039b3d0 = (undefined *)DAT_103a50f0[0x22];
      PTR_DAT_1039b368 = (undefined *)*DAT_103a50f0;
      _DAT_1039b4cc = DAT_103a50f0[1];
      return;
    }
  }
  return;
}

