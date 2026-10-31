/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001757 */

void FUN_180001757(void)

{
  longlong **pplVar1;
  int iVar2;
  int iVar3;
  HMODULE pHVar4;
  longlong lVar5;
  longlong lVar6;
  longlong ***ppplVar7;
  undefined2 *puVar8;
  bool bVar9;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  int local_b0;
  undefined1 local_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong **local_80;
  longlong **local_78;
  ulonglong local_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1800c8ca5(&local_60,0);
  local_98 = (undefined4)local_50;
  uStack_94 = local_50._4_4_;
  uStack_90 = (undefined4)uStack_48;
  uStack_8c = uStack_48._4_4_;
  uStack_a4 = uStack_5c;
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  local_50 = 0;
  uStack_48 = 7;
  local_60 = 0;
  FUN_1800010ec(&local_60);
  FUN_180001bd8(local_a8,local_f8);
  FUN_180001e04(local_d8,"nw.dll",0);
  FUN_180001c90(&local_80,local_f8,local_d8);
  FUN_180002218();
  local_b8 = 0xffff00000000;
  ppplVar7 = &local_80;
  if (7 < local_68) {
    ppplVar7 = (longlong ***)local_80;
  }
  local_b0 = FUN_18023a250(ppplVar7,&local_60,3,0xffffffff);
  FUN_1800024e2(&local_b8,local_b0,&local_60);
  iVar3 = local_b0;
  uStack_58 = FUN_180002218();
  local_60 = (undefined2)iVar3;
  uStack_5e = (undefined2)((uint)iVar3 >> 0x10);
  iVar2 = (int)local_b8;
  if ((int)local_b8 == 0) {
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000219a("exists",&local_60,&local_80);
    }
    DAT_180417498 = false;
  }
  else {
    FUN_180002218();
    DAT_180417498 = iVar2 != 1;
  }
  FUN_180001e4c(&local_80);
  FUN_180001e4c(local_d8);
  if (DAT_180417498 == '\0') {
    FUN_18000358a(&local_60,local_a8);
    DAT_180417498 = FUN_18001419c(&local_60);
    FUN_1800010ec(&local_60);
    if (DAT_180417498 == '\0') {
      pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
      FUN_1800c9a2b(&local_60,pHVar4);
      FUN_1800c9b62(&local_80,&local_60);
      FUN_1800010ec(&local_60);
      for (ppplVar7 = (longlong ***)local_80; ppplVar7 != (longlong ***)local_78;
          ppplVar7 = ppplVar7 + 3) {
        if ((((*(char *)(ppplVar7 + 2) == '\x01') && (*(char *)((longlong)ppplVar7 + 0x11) == '\0'))
            && (*(char *)((longlong)ppplVar7 + 0x12) == '\0')) && (DAT_180417499 == '\0')) {
          pplVar1 = *ppplVar7;
          lVar6 = (longlong)ppplVar7[1] + (longlong)pplVar1;
          FUN_180001e92(&local_60,"WOLF RPG EDITOR");
          if (lVar6 - (longlong)pplVar1 < local_50) {
            bVar9 = false;
          }
          else {
            puVar8 = &local_60;
            if (0xf < uStack_48) {
              puVar8 = (undefined2 *)CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
            }
            lVar5 = thunk_FUN_18023b6c0(pplVar1,lVar6,puVar8);
            bVar9 = lVar5 != lVar6;
          }
          DAT_180417499 = bVar9;
          FUN_180001ef2(&local_60);
          if (bVar9 != false) break;
        }
      }
      FUN_180004cea(&local_80);
    }
  }
  FUN_180001e4c(local_f8);
  FUN_180001e4c(local_a8);
  return;
}

