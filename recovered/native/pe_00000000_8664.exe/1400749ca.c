/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400749ca */

void FUN_1400749ca(void)

{
  longlong ***ppplVar1;
  int iVar2;
  longlong ****pppplVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined1 local_1a8 [53];
  undefined1 local_173;
  undefined8 ***local_108 [3];
  ulonglong local_f0;
  longlong ***local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8 [3];
  ulonglong local_c0;
  longlong ***local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong local_80;
  longlong ***local_78;
  longlong ***ppplStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = FUN_140081200();
  local_49 = *(undefined1 *)(local_80 + 0x81);
  *(undefined1 *)(local_80 + 0x81) = 0;
  local_78 = (longlong ***)0x0;
  ppplStack_70 = (longlong ***)0x0;
  local_68 = 0;
  FUN_140056569(&local_98);
  local_58 = local_90;
  puVar5 = local_98;
  do {
    if (puVar5 == local_58) {
      FUN_140059508();
      puVar5 = (undefined8 *)0x0;
      do {
        if (puVar5 == (undefined8 *)0x280) {
          *(undefined1 *)(local_80 + 0x81) = local_49;
          FUN_140075630(&local_78);
          return;
        }
        local_58 = puVar5;
        FUN_1401c5180(local_1a8,puVar5 + 0x281e54d0,0xa0);
        ppplVar1 = ppplStack_70;
        for (pppplVar3 = (longlong ****)local_78; pppplVar3 != (longlong ****)ppplVar1;
            pppplVar3 = pppplVar3 + 4) {
          FUN_1400750b4(pppplVar3,&local_b8);
          FUN_140055918(local_108,&DAT_140edcdbf,0);
          puVar5 = (undefined8 *)FUN_140075154(&local_b8,local_108);
          local_98 = puVar5;
          if (7 < (ulonglong)puVar5[3]) {
            local_98 = (undefined8 *)*puVar5;
          }
          local_90 = (undefined8 *)puVar5[2];
          FUN_140017160(local_d8,&local_98);
          ppppuVar6 = local_d8;
          if (0xf < local_c0) {
            ppppuVar6 = (undefined8 ****)local_d8[0];
          }
          iVar2 = FUN_1401a02b0(ppppuVar6,local_1a8);
          FUN_14000109c(local_d8);
          FUN_140001056(local_108);
          FUN_140001056(&local_b8);
          if (iVar2 == 0) {
            lVar7 = *(longlong *)(local_80 + 0x38);
            if (*(int *)(lVar7 + 0x68) != 0) {
              local_173 = 1;
            }
            local_b0 = (longlong **)pppplVar3[2];
            if ((longlong ***)0x7 < pppplVar3[3]) {
              pppplVar3 = (longlong ****)*pppplVar3;
            }
            local_b8 = (longlong ***)pppplVar3;
            FUN_140017160(local_d8,&local_b8,local_108);
            ppppuVar6 = local_d8;
            if (0xf < local_c0) {
              ppppuVar6 = (undefined8 ****)local_d8[0];
            }
            FUN_1400e2818(lVar7,ppppuVar6,0,local_1a8,0);
            FUN_14000109c(local_d8);
            break;
          }
        }
        puVar5 = local_58 + 0x14;
      } while( true );
    }
    FUN_1400016a0(local_d8,puVar5 + 4,0);
    pppplVar3 = (longlong ****)FUN_1400751b6(local_78,ppplStack_70);
    if (pppplVar3 == (longlong ****)ppplStack_70) {
      FUN_1400750b4(local_d8,local_1a8);
      FUN_140055918(local_108,&DAT_140edcdbf);
      uVar4 = FUN_140075154(local_1a8,local_108);
      FUN_1400032ac(&local_b8,uVar4);
      FUN_140001056(local_108);
      FUN_140001056(local_1a8);
      for (lVar7 = 0; lVar7 != 0x280; lVar7 = lVar7 + 0xa0) {
        FUN_1401c5180(local_1a8,&DAT_140f2a680 + lVar7,0xa0);
        local_e8 = (longlong ***)&local_b8;
        if (7 < local_a0) {
          local_e8 = local_b8;
        }
        local_e0 = local_a8;
        FUN_140017160(local_108,&local_e8);
        ppppuVar6 = local_108;
        if (0xf < local_f0) {
          ppppuVar6 = (undefined8 ****)local_108[0];
        }
        iVar2 = FUN_1401a02b0(ppppuVar6,local_1a8);
        FUN_14000109c(local_108);
        if (iVar2 == 0) {
          FUN_140075326(&local_78,local_d8);
          break;
        }
      }
      FUN_140001056(&local_b8);
    }
    FUN_140001056(local_d8);
    puVar5 = puVar5 + 8;
  } while( true );
}

