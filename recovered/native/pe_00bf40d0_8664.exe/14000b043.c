/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b043 */

void FUN_14000b043(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined8 uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    pauVar4 = (undefined1 (*) [32])*param_1;
    pauVar1 = (undefined1 (*) [32])(*pauVar4 + param_1[1] * 2);
    do {
      if (*(short *)*pauVar4 != 0x7b) {
        uVar5 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),0x7b);
        pauVar2 = (undefined1 (*) [32])FUN_140007e2b(pauVar4,pauVar1,(int)uVar5);
        pauVar3 = (undefined1 (*) [32])
                  FUN_140007e2b(pauVar4,pauVar2,(int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),0x7d)
                               );
        while (pauVar3 != pauVar2) {
          pauVar6 = (undefined1 (*) [32])(*pauVar3 + 2);
          if ((pauVar6 == pauVar2) || (*(short *)*pauVar6 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b455(0x14011bf47);
          }
          FUN_14000b5d8(&local_48,(undefined2 *)pauVar4,(undefined2 *)pauVar6,
                        (undefined8 *)param_2[4]);
          param_2[4] = local_40;
          pauVar4 = (undefined1 (*) [32])(*pauVar3 + 4);
          pauVar3 = (undefined1 (*) [32])
                    FUN_140007e2b(pauVar4,pauVar2,
                                  (int)CONCAT62((int6)((ulonglong)pauVar6 >> 0x10),0x7d));
        }
        FUN_14000b5d8(&local_48,(undefined2 *)pauVar4,(undefined2 *)pauVar2,(undefined8 *)param_2[4]
                     );
        param_2[4] = local_40;
        pauVar4 = pauVar2;
        if (pauVar2 == pauVar1) break;
      }
      param_3 = param_2;
      pauVar4 = (undefined1 (*) [32])FUN_14000b489((longlong)pauVar4,(ushort *)pauVar1,param_2);
    } while (pauVar4 != pauVar1);
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

