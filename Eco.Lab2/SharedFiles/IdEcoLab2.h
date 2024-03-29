/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoLab2
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoLab2
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __ID_ECOLAB2_H__
#define __ID_ECOLAB2_H__

#include "IEcoBase1.h"
#include "IEcoLab2.h"

/* EcoLab2 CID = {2F5DF16E-E1BF-43B9-99A4-34ED38FE8F3A} */
#ifndef __CID_EcoLab2
static const UGUID CID_EcoLab2 = {0x01, 0x10, 0x2F, 0x5D, 0xF1, 0x6E, 0xE1, 0xBF, 0x43, 0xB9, 0x99, 0xA4, 0x34, 0xED, 0x38, 0xFE, 0x8F, 0x3A};
#endif /* __CID_EcoLab2 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_2F5DF16EE1BF43B999A434ED38FE8F3A;
#endif

#endif /* __ID_ECOLAB2_H__ */
