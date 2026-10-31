/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497497 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00497497(int *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,LPWSTR param_6
                 ,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *this;
  void *this_00;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  
  uVar1 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  iVar4 = param_5;
  if (0 < param_5) {
    iVar2 = FUN_0048d190(param_4,param_5);
    iVar4 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 8);
  }
  uVar3 = 1;
  if (param_9 != 0) {
    uVar3 = 9;
  }
  iVar2 = FUN_00495fa1(param_8,uVar3,param_4,iVar4,(LPWSTR)0x0,0);
  if (iVar2 == 0) goto LAB_00497672;
  uVar3 = iVar2 * 2 + 8;
  uVar3 = -(uint)((uint)(iVar2 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    pWVar7 = (LPCWSTR)0x0;
  }
  else if (uVar3 < 0x401) {
    puVar6 = (undefined4 *)&stack0xffffffe8;
    pWVar7 = (LPCWSTR)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00497548:
      pWVar7 = (LPCWSTR)(puVar6 + 2);
      if (((pWVar7 != (LPCWSTR)0x0) &&
          (iVar4 = FUN_00495fa1(param_8,1,param_4,iVar4,pWVar7,iVar2), iVar4 != 0)) &&
         (iVar4 = ___acrt_LCMapStringEx_36(this,param_2,param_3,pWVar7,iVar2,(LPWSTR)0x0,0,0,0,0),
         iVar4 != 0)) {
        if ((param_3 & 0x400) == 0) {
          this_00 = (void *)(iVar4 * 2 + 8);
          pvVar5 = (void *)(-(uint)((void *)(iVar4 * 2) < this_00) & (uint)this_00);
          if (pvVar5 == (void *)0x0) {
            pWVar8 = (LPCWSTR)0x0;
          }
          else if (pvVar5 < (void *)0x401) {
            puVar6 = (undefined4 *)&stack0xffffffe8;
            pWVar8 = (LPCWSTR)&stack0xffffffe8;
            if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00497609:
              pWVar8 = (LPCWSTR)(puVar6 + 2);
              if ((pWVar8 != (LPCWSTR)0x0) &&
                 (iVar2 = ___acrt_LCMapStringEx_36
                                    (this_00,param_2,param_3,pWVar7,iVar2,pWVar8,iVar4,0,0,0),
                 iVar2 != 0)) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = (LPWSTR)0x0;
                }
                iVar4 = FUN_00496063(param_8,0,pWVar8,iVar4,(LPSTR)param_6,param_7,(LPCSTR)0x0,
                                     (LPBOOL)0x0);
                if (iVar4 != 0) {
                  FUN_00484420((int)pWVar8);
                  goto LAB_00497669;
                }
              }
            }
          }
          else {
            this_00 = pvVar5;
            puVar6 = FUN_00495f50((SIZE_T)pvVar5);
            pWVar8 = (LPCWSTR)0x0;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0xdddd;
              goto LAB_00497609;
            }
          }
          FUN_00484420((int)pWVar8);
        }
        else if ((param_7 != 0) && (iVar4 <= param_7)) {
          ___acrt_LCMapStringEx_36((void *)0x0,param_2,param_3,pWVar7,iVar2,param_6,param_7,0,0,0);
        }
      }
    }
  }
  else {
    puVar6 = FUN_00495f50(uVar3);
    pWVar7 = (LPCWSTR)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xdddd;
      goto LAB_00497548;
    }
  }
LAB_00497669:
  FUN_00484420((int)pWVar7);
LAB_00497672:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uVar1 ^ (uint)&stack0xfffffffc);
}

